![image](https://github.com/HAQ-NAWAZ-MALIK/HackerRank-projects/assets/86514900/8edba1d4-b6b1-4a32-a690-43294357afd2)# React: Slideshow App & Sorting Articles



https://www.hackerrank.com/profile/HAQ_NAWAZ_MALIK

## SCAN QR to see my HACKERRANK profie
![image](https://github.com/HAQ-NAWAZ-MALIK/HackerRank-projects/assets/86514900/faabd3e2-aab6-4161-9601-2625bc3c4b20)

![link](https://hrcdn.net/s3_pub/istreet-assets/j3Q6jXZ3DOOPRlCs9hFcnQ)


![image](https://github.com/HAQ-NAWAZ-MALIK/HackerRank-projects/assets/86514900/d7d9b591-4b01-498a-a3b2-7b88a3379dff)


## Environment

- React Version: 16.13.1
- Node Version: ^12.18.3
- Default Port: 8000

## Project Specifications

### Slideshow App

A basic slideshow application forked from HackerRank certification Test Suite.

Create a basic slideshow application, as shown below. Application requirements are given below, and the finished application must pass all of the unit tests.

![Gif](https://hrcdn.net/s3_pub/istreet-assets/j3Q6jXZ3DOOPRlCs9hFcnQ/slideshow.gif)

Your task is to complete the implementation of `src/components/Slides.js` according to the following requirements:

- The Slides component takes an array of slides as a prop. Each element of this array denotes a single slide and is an object with 2 properties: string title and string text.
- On application launch, the first slide must be rendered.
- Clicking on the "Next" button shows the next slide. This button is disabled when the current slide is the last one.
- Clicking on the "Prev" button shows the previous slide. This button is disabled when the current slide is the first one.
- Clicking on the "Restart" button returns to the first slide. This button is disabled when the current slide is the first one.
- You can assume that the passed slides array contains at least one slide.

Initially, the file is filled with boilerplate code. Note the following:

- The "Restart" button must have `data-testid="button-restart"`.
- The "Prev" button must have `data-testid="button-prev"`.
- The "Next" button must have `data-testid="button-next"`.
- Each slide's title must be rendered as an `<h1>` element with `data-testid="title"`.
- Each slide's text must be rendered as a `<p>` element with `data-testid="text"`.

Please note that the component has the above data-testid attributes for test cases and certain classes and ids for rendering purposes. It is advised not to change them.

### Sorting Articles

A basic article sorting application forked from HackerRank certification Test Suite.

Create a basic article sorting application, as shown below. Some core functionalities have already been implemented, but the application is not complete. Application requirements are given below, and the finished application must pass all of the unit tests.

![sorting-app](https://hrcdn.net/s3_pub/istreet-assets/YkVzgbGgMj0cfT9P97s8jg/sorting-articles.gif)

The app has one component named Articles. The list of articles to be displayed is already provided in the app.

The app must have the following functionalities:

- The list of articles is passed to the App component as a prop in the form of an array of objects.
- Each article has the following three properties:
  - title: The title of the article [STRING]
  - upvotes: The number of upvotes for an article [NUMBER]
  - date: The publish date for the article in the format YYYY-MM-DD [STRING]
- By default, the articles should be displayed in the table ordered by the number of upvotes in descending order.
- Clicking on the "Most Upvoted" button should reorder and display the articles by the number of upvotes in descending order.
- Clicking on the "Most Recent" button should reorder and display the articles by date in descending order.
- You can assume that each article has a unique publish date and number of upvotes.

Your task is to complete the implementation of `src/App.js` and `src/components/Articles.js`.

The following data-testid attributes are required in the component for the tests to pass:

- The button to reorder and display the most upvoted articles must have the data-testid attribute "most-upvoted-link".
- The button to reorder and display the most recent articles must have the data-testid attribute "most-recent-link".
- Each article must be rendered inside a `<tr>` element that has the data-testid attribute "article".
- The title of each article must be rendered in a `<td>` element that has the data-testid attribute "article-title".
- The number of upvotes of each article must be rendered in a `<td>` element that has the data-testid attribute "article-upvotes".
- The publish date of each article must be rendered in a `<td>` element that has the data-testid attribute "article-date".

## Environment

- React Version: 16.13.1
- Default Port: 8000

**Read-Only Files**

- `src/App.test.js`

**Commands**

- run:

```bash
bash bin/env_setup && . $HOME/.nvm/nvm.sh && npm start
